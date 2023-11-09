/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Entity.cpp
*/

#include "Entity.hpp"

fg::Entity::Entity(const std::string &filepath)
    : _filepath(filepath)
{
    initialize();
}

void fg::Entity::initialize()
{
    load();
    createAbility();

    _healthBar.initialize(_health, _maxHealth, sf::Color::White, sf::Color::Red, sf::Color::Black);
    // _sanityBar.initialize(_sanity, 100, sf::Color::White, sf::Color::White, sf::Color::Black);
}

void fg::Entity::update()
{
    _healthBar.setPosition(_sprite.getSprite().getPosition().x, _sprite.getSprite().getPosition().y + 40);
    _healthBar.update();
    // _sanityBar.setPosition(_sprite.getSprite().getPosition().x, _sprite.getSprite().getPosition().y + 70);
    // _sanityBar.update();
}

void fg::Entity::draw(sf::RenderWindow &window)
{
    window.draw(_sprite.getSprite());
    _healthBar.draw(window);
    // _sanityBar.draw(window);
}

void fg::Entity::event(sf::RenderWindow &window, sf::Event &event)
{
    _healthBar.event(window, event);
    // _sanityBar.event(window, event);
}

void fg::Entity::save()
{
    fg::FileWriter file(_filepath);
    file.addData("name", _name);
    file.addData("class", std::to_string(static_cast<int>(_className)));
    file.addData("level", std::to_string(_level));
    file.addData("health", std::to_string(_health));
    file.addData("maxHealth", std::to_string(_maxHealth));
    file.addData("initiative", std::to_string(_initiative));
    file.addData("sanity", std::to_string(_sanity));
    file.addData("idle", "assets/class/Crusader/crusader.sprite.idle.png");
    file.addData("combat", "assets/class/Crusader/crusader.sprite.combat.png");
    file.addData("defend", "assets/class/Crusader/crusader.sprite.defend.png");
    file.addData("camp", "assets/class/Crusader/crusader.sprite.camp.png");
    file.addData("attack1", "assets/class/Crusader/crusader.sprite.attack_sword.png");
    file.addData("attack2", "assets/class/Crusader/crusader.sprite.attack_stun.png");
    file.addData("attack3", "assets/class/Crusader/crusader.sprite.attack_charge.png");
    file.addData("attack4", "assets/class/Crusader/crusader.sprite.attack_heal.png");
    file.addData("attack1Level", std::to_string(_abilityList.getAbility(1).getLevel()));
    file.addData("attack2Level", std::to_string(_abilityList.getAbility(2).getLevel()));
    file.addData("attack3Level", std::to_string(_abilityList.getAbility(3).getLevel()));
    file.addData("attack4Level", std::to_string(_abilityList.getAbility(4).getLevel()));
    file.save();
}

void fg::Entity::save(const std::string &filepath)
{
    _filepath = filepath;
    save();
}

void fg::Entity::load()
{
    std::cout << YELLOW << "Loading entity... " << _filepath << RESET << std::endl;
    fg::FileWriter file(_filepath);
    file.load();
    _name = file.getData<std::string>("name");
    _className = static_cast<fg::Class>(file.getData<int>("class"));
    _level = file.getData<int>("level");
    _health = file.getData<int>("health");
    _maxHealth = file.getData<int>("maxHealth");
    _initiative = file.getData<int>("initiative");
    _sanity = file.getData<int>("sanity");

    _sprite.initialize(file.getData<std::string>("idle"), "idle");
    _sprite.addState(file.getData<std::string>("combat"), "combat");
    _sprite.addState(file.getData<std::string>("defend"), "defend");
    _sprite.addState(file.getData<std::string>("camp"), "camp");
    _sprite.addState(file.getData<std::string>("attack1"), "attack1");
    _sprite.addState(file.getData<std::string>("attack2"), "attack2");
    _sprite.addState(file.getData<std::string>("attack3"), "attack3");
    _sprite.addState(file.getData<std::string>("attack4"), "attack4");

    _attack1Level = file.getData<int>("attack1Level");
    _attack2Level = file.getData<int>("attack2Level");
    _attack3Level = file.getData<int>("attack3Level");
    _attack4Level = file.getData<int>("attack4Level");

    std::cout << GREEN << "Entity loaded!" << RESET << std::endl;
}

void fg::Entity::load(const std::string &filepath)
{
    _filepath = filepath;
    load();
}

void fg::Entity::createAbility()
{
    switch (_className) {
        case fg::Class::Crusader:
            crusaderAbility();
            break;
        case fg::Class::Vestal:
            vestalAbility();
            break;
        case fg::Class::Arbalest:
            arbalestAbility();
            break;
        case fg::Class::Barbarian:
            barbarianAbility();
            break;
        case fg::Class::Thief:
            thiefAbility();
            break;
        case fg::Class::Mercenary:
            mercenaryAbility();
            break;
        case fg::Class::Occlutist:
            occlutistAbility();
            break;
        case fg::Class::PlagueDoctor:
            plagueDoctorAbility();
            break;
        case fg::Class::Monster:
            monsterAbility();
            break;
    }
}

void fg::Entity::crusaderAbility()
{
    fg::Ability ability;
    ability.initialize("Sword Attack", "Attack an enemy with your sword", 3, 6, 2, 90, 10, 20, 10, [](fg::Entity &caster, fg::Entity &target) {
        int abilityLevel = caster.getAbility(1).getLevel();
        int minDamage = caster.getAbility(1).getMinDamage() + abilityLevel * caster.getAbility(1).getDamageBoostPerLevel();
        int maxDamage = caster.getAbility(1).getMaxDamage() + abilityLevel * caster.getAbility(1).getDamageBoostPerLevel();
        int damage = fg::Random::getRandomNumber(minDamage, maxDamage);
        int critical = 100 - fg::Random::getRandomNumber(0, 100);
        int criticalChance = caster.getAbility(1).getCritical() + abilityLevel * caster.getAbility(1).getCriticalBoostPerLevel();
        int precision = 100 - fg::Random::getRandomNumber(0, 100);
        int precisionChance = caster.getAbility(1).getPrecision() + abilityLevel * caster.getAbility(1).getPrecisionBoostPerLevel();

        std::string log = caster.getName() + " used " + caster.getAbility(1).getName() + " on " + target.getName();

        if (critical <= criticalChance) {
            target.setHealth(target.getHealth() - damage * 2);
            log.append(" did a critical hit and dealt " + std::to_string(damage * 2) + " damage!");
            return log;
        }
        if (precision > precisionChance) {
            log.append(" and missed!");
            return log;
        }
        target.setHealth(target.getHealth() - damage);
        log.append(" and dealt " + std::to_string(damage) + " damage!");
        return log;
    });
    ability.setLevel(_attack1Level);
    _abilityList.addAbility(1, ability);

    fg::Ability ability2;
    ability2.initialize("Stun", "Stun an enemy with the guard of your sword", 1, 3, 1, 80, 5, 10, 10, [](fg::Entity &caster, fg::Entity &target) {
        int abilityLevel = caster.getAbility(2).getLevel();
        int minDamage = caster.getAbility(2).getMinDamage() + abilityLevel * caster.getAbility(2).getDamageBoostPerLevel();
        int maxDamage = caster.getAbility(2).getMaxDamage() + abilityLevel * caster.getAbility(2).getDamageBoostPerLevel();
        int damage = fg::Random::getRandomNumber(minDamage, maxDamage);
        int critical = 100 - fg::Random::getRandomNumber(0, 100);
        int criticalChance = caster.getAbility(2).getCritical() + abilityLevel * caster.getAbility(2).getCriticalBoostPerLevel();
        int precision = 100 - fg::Random::getRandomNumber(0, 100);
        int precisionChance = caster.getAbility(2).getPrecision() + abilityLevel * caster.getAbility(2).getPrecisionBoostPerLevel();

        std::string log = caster.getName() + " used " + caster.getAbility(2).getName() + " on " + target.getName();

        if (critical <= criticalChance) {
            target.setHealth(target.getHealth() - damage * 2);
            log.append(" did a critical hit and dealt " + std::to_string(damage * 2) + " damage!");
            return log;
        }
        if (precision > precisionChance) {
            log.append(" and missed!");
            return log;
        }
        target.setHealth(target.getHealth() - damage);
        log.append(" and dealt " + std::to_string(damage) + " damage!");
        return log;
    });
    ability2.setLevel(_attack2Level);
    _abilityList.addAbility(2, ability2);

    fg::Ability ability3;
    ability3.initialize("Charge", "Charge an enemy with your sword", 5, 8, 3, 60, 10, 50, 10, [](fg::Entity &caster, fg::Entity &target) {
        int abilityLevel = caster.getAbility(3).getLevel();
        int minDamage = caster.getAbility(3).getMinDamage() + abilityLevel * caster.getAbility(3).getDamageBoostPerLevel();
        int maxDamage = caster.getAbility(3).getMaxDamage() + abilityLevel * caster.getAbility(3).getDamageBoostPerLevel();
        int damage = fg::Random::getRandomNumber(minDamage, maxDamage);
        int critical = 100 - fg::Random::getRandomNumber(0, 100);
        int criticalChance = caster.getAbility(3).getCritical() + abilityLevel * caster.getAbility(3).getCriticalBoostPerLevel();
        int precision = 100 - fg::Random::getRandomNumber(0, 100);
        int precisionChance = caster.getAbility(3).getPrecision() + abilityLevel * caster.getAbility(3).getPrecisionBoostPerLevel();

        std::string log = caster.getName() + " used " + caster.getAbility(3).getName() + " on " + target.getName();

        if (critical <= criticalChance) {
            target.setHealth(target.getHealth() - damage * 2);
            log.append(" did a critical hit and dealt " + std::to_string(damage * 2) + " damage!");
            return log;
        }
        if (precision > precisionChance) {
            log.append(" and missed!");
            return log;
        }
        target.setHealth(target.getHealth() - damage);
        log.append(" and dealt " + std::to_string(damage) + " damage!");
        return log;
    });
    ability3.setLevel(_attack3Level);
    _abilityList.addAbility(3, ability3);

    fg::Ability ability4;
    ability4.initialize("Courage", "Give hope to you and your ally", 4, 7, 3, 0, 0, 30, 10, [](fg::Entity &caster, fg::Entity &target) {
        int abilityLevel = caster.getAbility(4).getLevel();
        int minHeal = caster.getAbility(4).getMinDamage() + abilityLevel * caster.getAbility(4).getDamageBoostPerLevel();
        int maxHeal = caster.getAbility(4).getMaxDamage() + abilityLevel * caster.getAbility(4).getDamageBoostPerLevel();
        int heal = fg::Random::getRandomNumber(minHeal, maxHeal);
        int critical = 100 - fg::Random::getRandomNumber(0, 100);
        int criticalChance = caster.getAbility(4).getCritical() + abilityLevel * caster.getAbility(4).getCriticalBoostPerLevel();
        
        std::string log = caster.getName() + " used " + caster.getAbility(4).getName() + " on " + target.getName();

        if (critical <= criticalChance) {
            caster.setHealth(caster.getHealth() + heal * 2);
            caster.setSanity(caster.getSanity() + heal * 2);
            target.setHealth(target.getHealth() + heal * 2);
            target.setSanity(target.getSanity() + heal * 2);
            log.append(" did a critical heal and healed " + std::to_string(heal * 2) + " health and sanity to the both of them!");
            return log;
        }
        caster.setHealth(caster.getHealth() + heal);
        caster.setSanity(caster.getSanity() + heal);
        target.setSanity(target.getSanity() + heal);
        target.setHealth(target.getHealth() + heal);
        log.append(" and healed " + std::to_string(heal) + " health and sanity to the both of them!");
        return log;
    });
    ability4.setLevel(_attack4Level);
    _abilityList.addAbility(4, ability4);
}

void fg::Entity::vestalAbility()
{
    // TODO
    crusaderAbility();
}

void fg::Entity::arbalestAbility()
{
    // TODO
    crusaderAbility();
}

void fg::Entity::barbarianAbility()
{
    // TODO
    crusaderAbility();
}

void fg::Entity::thiefAbility()
{
    // TODO
    crusaderAbility();
}

void fg::Entity::mercenaryAbility()
{
    // TODO
    crusaderAbility();
}

void fg::Entity::occlutistAbility()
{
    // TODO
    crusaderAbility();
}

void fg::Entity::plagueDoctorAbility()
{
    // TODO
    crusaderAbility();
}

void fg::Entity::monsterAbility()
{
    // TODO
    crusaderAbility();
}

void fg::Entity::setFilepath(const std::string &filepath)
{
    _filepath = filepath;
}

std::string &fg::Entity::getFilepath()
{
    return _filepath;
}

fg::StateSprite &fg::Entity::getStateSprite()
{
    return _sprite;
}

sf::Sprite &fg::Entity::getSprite()
{
    return _sprite.getSprite();
}

void fg::Entity::setName(const std::string &name)
{
    _name = name;
}

void fg::Entity::setClass(fg::Class className)
{
    _className = className;
}

void fg::Entity::addAbility(int abilityId, fg::Ability &ability)
{
    _abilityList.addAbility(abilityId, ability);
}

void fg::Entity::setLevel(int level)
{
    _level = level;
}

void fg::Entity::setHealth(int health)
{
    _health = health;
    if (_health > _maxHealth)
        _health = _maxHealth;
    else if (_health < 0)
        _health = 0;
    _healthBar.setHealth(_health);
}

void fg::Entity::setMaxHealth(int maxHealth)
{
    _maxHealth = maxHealth;
    _healthBar.setMaxHealth(_maxHealth);
    setHealth(_health);
    
}

void fg::Entity::setInitiative(int initiative)
{
    _initiative = initiative;
}

void fg::Entity::setSanity(int sanity)
{
    _sanity = sanity;
    if (_sanity > 100)
        _sanity = 100;
    else if (_sanity < 0)
        _sanity = 0;
}

std::string &fg::Entity::getName()
{
    return _name;
}

fg::Class fg::Entity::getClass()
{
    return _className;
}

fg::Ability &fg::Entity::getAbility(int abilityNumber)
{
    return _abilityList.getAbility(abilityNumber);
}

int fg::Entity::getLevel()
{
    return _level;
}

int fg::Entity::getHealth()
{
    return _health;
}

int fg::Entity::getMaxHealth()
{
    return _maxHealth;
}

int fg::Entity::getInitiative()
{
    return _initiative;
}

int fg::Entity::getSanity()
{
    return _sanity;
}