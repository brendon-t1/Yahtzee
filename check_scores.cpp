#include "main.h"
using std::map;
using std::vector;
// these functions determine if the dice value requirement for scores have been met
// and what the value of the scores are if they vary

// chance
int chance(vector<Dice> &five_dice) {
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += five_dice[i].get_score();
    }
    return sum;
}

// large straight
bool large_straight(vector<Dice> &five_dice) {
    int start = five_dice[0].get_score();
    for(int i = 1; i < 5; i++) {
        if(five_dice[i].get_score() - 1 == start) {
            start += 1;
        }
        else {
            return false;
        }
    }
    return true;
}

// small straight
bool small_straight(vector<Dice> &five_dice) {
    int start = five_dice[0].get_score();
    bool free = true;
    for(int i = 1; i < 5; i++) {
        if(five_dice[i].get_score() - 1 == start) {
            start += 1;
        }
        else if(free == true) {
            free = false;
        }
        else {
            return false;
        }
    }
    return true;
}

// three of a kind
bool three_kind(map<int, int> &num_count) {
    for(const auto & [key, value] : num_count) {
        if(value == 3) {return true;}
    }
    return false;
}

// four of a kind
bool four_kind(map<int, int> &num_count) {
    for(const auto & [key, value] : num_count) {
        if(value == 4) {return true;}
    }
    return false;
}

// full house
bool full_house(map<int, int> &num_count) {
    bool two = false;
    bool three = false;
    for(const auto & [key, value] : num_count) {
        if(value == 2) {two = true;}
        if(value == 3) {three = true;}
    }
    if(two == true && three == true) {return true;}
    return false;
}


bool full_house2(vector<Dice> &five_dice) {
    int val1 = five_dice[0].get_score();
    bool three = false;
    bool two = false;
    int count = 1;

    for(int i = 1; i < 3; i++) {
        if(val1 == five_dice[i].get_score()) {
            count++;
        }
    }
    if(count == 3) {
        three = true;
    }
    else if(count ==2) {
        two = true;
    }
    int val2;
    if(three == true) {
        val2 = five_dice[3].get_score();
        if(val2 == five_dice[4].get_score()) {
            return true;
        }
    }
    else if(two == true){
        val2 = five_dice[2].get_score();
        for(int i = 3; i < 5; i++) {
            if(val2 != five_dice[i].get_score()) {
                return false;
            }
        }
        return true;
    }
    return false;
}

// yahtzee
bool check_yahtzee(vector<Dice> &five_dice) {
    int val = five_dice[0].get_score();
    for(int i = 0; i < 5; i++) {
        if(five_dice[i].get_score() != val) {
            return false;
        }
    }
    return true;
    // we could return a boolean or 50/0
}

int num_values(map<int, int> &num_count, int val) {
    int total = num_count[val];
    return total;
}