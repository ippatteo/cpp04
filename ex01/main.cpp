
#include "ScavTrap.hpp"


int main() {
    // Test della classe ClapTrap
    std::cout << "Testing ClapTrap" << std::endl;
    ClapTrap clap1("Clappy");
    ClapTrap clap2;
    clap2 = clap1;

    clap1.attack("Enemy");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    ClapTrap clap3(clap1);
    clap3.attack("Another Enemy");

    std::cout << "\nTesting ScavTrap" << std::endl;
    // Test della classe ScavTrap
    ScavTrap scav1("Scavy");
    scav1.attack("Big Enemy");
    scav1.takeDamage(20);
    scav1.beRepaired(15);
    scav1.guardGate();

    ScavTrap scav2(scav1);
    scav2.attack("Small Enemy");

    ScavTrap scav3;
    scav3 = scav1;
    scav3.guardGate();

    return 0;
}
