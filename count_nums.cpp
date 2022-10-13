#include "main.h"
using std::vector;
using std::map;

void count_nums(map<int, int> &num_count, vector<Dice> &five_dice) {
    int val;
    for(int i = 0; i < 5; i++) {
        // check the value at five_dice[i]
        // use the value as key and count value ++ in map
        val = five_dice[i].get_score();
        num_count[val]++;
    }
}