#include "main.h"
using std::vector;

void sort_dice(vector<Dice> &five_dice) {
    sort(five_dice.begin(), five_dice.end(), [] ( Dice& dice1, Dice& dice2 ) {
        return dice1.get_score() < dice2.get_score();
    });
}