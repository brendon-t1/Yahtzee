#include "main.h"
using std::vector;

void roll_dice(vector<Dice> &five_dice) {
    srand(time(NULL));
    for(int i = 0; i < 5; i++) {
        if(five_dice[i].get_save() == false) {
            five_dice[i].set_score(rand() % 6 + 1);
        }
    }
}

