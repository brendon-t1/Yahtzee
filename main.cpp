#include "main.h"
#include "dice_roll.cpp"
#include "sort_dice.cpp"
#include "print_dice.cpp"
#include "save_dice.cpp"
#include "count_nums.cpp"
#include "check_scores.cpp"
#include "print_num_score.cpp"

using std::vector;
using std::map;

int main() {

    vector<Dice> five_dice {5, Dice()};
    map<int, int> num_count;

    int i = 3;
    while(i > 0){
    roll_dice(five_dice);
    sort_dice(five_dice);
    print_dice(five_dice);
    if(i > 1){
        save_dice(five_dice);
    }
    i--;
    }
    count_nums(num_count, five_dice);


   
    // std::cout << "ones " << num_values(num_count, 1) << std::endl;
    // std::cout << "twos " << num_values(num_count, 2) << std::endl;
    // std::cout << "threes " << num_values(num_count, 3) << std::endl;
    // std::cout << "fours " << num_values(num_count, 4) << std::endl;
    // std::cout << "fives " << num_values(num_count, 5) << std::endl;
    // std::cout << "sixes " << num_values(num_count, 6) << std::endl;
    // std::cout << "chance " << chance(five_dice) << std::endl;
    // std::cout << "small straight " << small_straight(five_dice) << std::endl;
    // std::cout << "large straight " << large_straight(five_dice) << std::endl;
    // std::cout << "three of a kind " << three_kind(num_count) << std::endl;
    // std::cout << "four of a kind " << four_kind(num_count) << std::endl;
    // std::cout << "full house " << full_house(num_count) << std::endl;
    // std::cout << "yahtzee " << check_yahtzee(five_dice) << std::endl;
}