
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Test della classe ClapTrap
    std::cout << "=== Testing ClapTrap ===" << std::endl;
    ClapTrap clap1("Clappy");
    clap1.attack("Enemy");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    ClapTrap clap2(clap1);
    clap2.attack("Another Enemy");

    ClapTrap clap3;
    clap3 = clap1;
    clap3.takeDamage(10);

    std::cout << "\n=== Testing ScavTrap ===" << std::endl;
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

    std::cout << "\n=== Testing FragTrap ===" << std::endl;
    // Test della classe FragTrap
    FragTrap frag1("Fraggy");
    frag1.attack("Huge Enemy");
    frag1.takeDamage(30);
    frag1.beRepaired(20);
    frag1.highFivesGuys();

    FragTrap frag2(frag1);
    frag2.attack("Another Enemy");

    FragTrap frag3;
    frag3 = frag1;
    frag3.highFivesGuys();

    return 0;
}
