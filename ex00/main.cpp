#include "ClapTrap.hpp"

int main() {
    // Test del costruttore di default
    ClapTrap defaultClap;
    defaultClap.attack("Enemy");
    defaultClap.takeDamage(5);
    defaultClap.beRepaired(3);

    // Test del costruttore con nome
    ClapTrap namedClap("Clappy");
    namedClap.attack("Another Enemy");
    namedClap.takeDamage(8);
    namedClap.beRepaired(5);
    namedClap.attack("Another Enemy");

    // Test della copia
    ClapTrap copiedClap(namedClap);
    copiedClap.attack("Test Target");

    // Test dell'assegnazione
    ClapTrap assignedClap;
    assignedClap = namedClap;
    assignedClap.beRepaired(2);

    return 0;
}
