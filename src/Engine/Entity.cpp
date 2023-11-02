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
    load();
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
    ability.initialize("Sword Attack", "Attack an enemy with your sword", 90, 20, [](fg::Entity &entity) {
        int abilityLevel = entity.getAbility(1).getLevel();
        int damage = fg::Random::getRandomNumber(3, 6) + abilityLevel * 2;
        
        int critical = 100 - fg::Random::getRandomNumber(0, 100);
        if (critical <= entity.getAbility(1).getCritical() + abilityLevel * 10) {
            std::cout << "Critical hit!" << std::endl;
            entity.setHealth(entity.getHealth() - damage * 2);
            return;
        }
        int precision = 100 - fg::Random::getRandomNumber(0, 100);
        if (precision > entity.getAbility(1).getPrecision() + abilityLevel * 10) {
            std::cout << "Missed!" << std::endl;
            return;
        }
        entity.setHealth(entity.getHealth() - damage);
    });
    ability.setLevel(0);
    _abilityList.addAbility(1, ability);

    fg::Ability ability2;
    ability2.initialize("Stun", "Stun an enemy with the guard of your sword", 80, 10, [](fg::Entity &entity) {
        int abilityLevel = entity.getAbility(2).getLevel();
        int damage = fg::Random::getRandomNumber(1, 3) + abilityLevel * 1;
        
        int critical = 100 - fg::Random::getRandomNumber(0, 100);
        if (critical <= entity.getAbility(2).getCritical() + abilityLevel * 10) {
            std::cout << "Critical hit!" << std::endl;
            entity.setHealth(entity.getHealth() - damage * 2);
            return;
        }
        int precision = 100 - fg::Random::getRandomNumber(0, 100);
        if (precision > entity.getAbility(2).getPrecision() + abilityLevel * 5) {
            std::cout << "Missed!" << std::endl;
            return;
        }
        entity.setHealth(entity.getHealth() - damage);
    });
    ability2.setLevel(0);
    _abilityList.addAbility(2, ability2);

    fg::Ability ability3;
    ability3.initialize("Charge", "Charge an enemy with your sword", 60, 50, [](fg::Entity &entity) {
        int abilityLevel = entity.getAbility(3).getLevel();
        int damage = fg::Random::getRandomNumber(5, 8) + abilityLevel * 3;
        
        int critical = 100 - fg::Random::getRandomNumber(0, 100);
        if (critical <= entity.getAbility(3).getCritical() + abilityLevel * 10) {
            std::cout << "Critical hit!" << std::endl;
            entity.setHealth(entity.getHealth() - damage * 2);
            return;
        }
        int precision = 100 - fg::Random::getRandomNumber(0, 100);
        if (precision > entity.getAbility(3).getPrecision() + abilityLevel * 10) {
            std::cout << "Missed!" << std::endl;
            return;
        }
        entity.setHealth(entity.getHealth() - damage);
    });
    ability3.setLevel(0);
    _abilityList.addAbility(3, ability3);

    fg::Ability ability4;
    ability4.initialize("Courage", "Give hope to you and your allies", 0, 30, [](fg::Entity &entity) {
        int abilityLevel = entity.getAbility(4).getLevel();
        int heal = fg::Random::getRandomNumber(10, 20) + abilityLevel * 10;
        
        int critical = 100 - fg::Random::getRandomNumber(0, 100);
        if (critical <= entity.getAbility(4).getCritical() + abilityLevel * 10) {
            std::cout << "Critical heal!" << std::endl;
            entity.setSanity(entity.getSanity() + heal * 2);
            return;
        }
        entity.setSanity(entity.getSanity() + heal);
    });
    ability4.setLevel(0);
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
}

void fg::Entity::setMaxHealth(int maxHealth)
{
    _maxHealth = maxHealth;
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