#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int     main() {
    {
        Character* moi = new Character("moi");
        std::cout << *moi;
        Enemy* b = new RadScorpion();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();
        moi->equip(pr);
        std::cout << *moi;
        moi->equip(pf);
        moi->attack(b);
        std::cout << *moi;
        moi->equip(pr);
        std::cout << *moi;
        moi->attack(b);
        std::cout << *moi;
        moi->attack(b);
        std::cout << *moi;
        PlasmaRifle p;
    }

     {
        Character* moi = new Character("moi");
        std::cout << *moi;
        Enemy* b = new SuperMutant();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();
        moi->equip(pr);
        std::cout << *moi;
        moi->equip(pf);
        moi->attack(b);
        std::cout << *moi;
        moi->equip(pr);
        std::cout << *moi;
        moi->attack(b);
        std::cout << *moi;
        moi->attack(b);
        std::cout << *moi;
        PlasmaRifle p;
    }
}