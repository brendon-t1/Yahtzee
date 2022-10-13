#include "main.h"
using std::vector;

void save_dice(vector<Dice> &five_dice) {
    char yes_no = 'N';
    for(int i = 0; i < 5; i++) {
        std::cout << "Type Y to save Die " << i << " of value " 
        << five_dice[i].get_score() << " type N to reroll" << std::endl;

        std::cin >> yes_no;
        if(yes_no == 'Y' || yes_no == 'y') {
            five_dice[i].set_save(true);
        } 
    }
}