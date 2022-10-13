#ifndef main_h_include
#define main_h_include


#include <string>
#include <vector>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <map>

class Dice {
    public:
        Dice() {}
        void set_score(int s) {score = s;}
        int get_score(){return score;}
        void set_save(bool s) {save = s;}
        bool get_save(){return save;}
    private:
        int score = 0;
        // if user wants to save or roll the die, starts with false for first roll
        bool save = false;
};

class Score {
    public:
        Score(int val) {value = val}
        int get_score(){return score;}
        bool is_filled(){return filled;}

        void set_score_achieved(int s) {
            score = s;
            filled = true;
            achieved = true;
        }
        void set_score_scratch() {
            score = 0;
            filled = true;
        }
    private:
        int value;
        // if default value for score
        int score = 0;
        // has user filled this score yet
        bool filled = false;
        // qualifications of score do not need to be fulfilled to fill score(this is a scratch)
        // if achieved is true then user gets points
        bool achieved = false;
};

#endif