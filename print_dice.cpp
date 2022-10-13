#include "main.h"
using std::vector;

void print_dice(vector<Dice> &five_dice) {
    for(int i = 0; i < 5; i++) {
            std::cout << five_dice[i].get_score() << " ";
        }
        std::cout << std::endl;
}