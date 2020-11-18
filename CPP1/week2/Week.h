//
// Created by husey on 3-9-2020.
//

#ifndef CPP1_WEEK_H
#define CPP1_WEEK_H
class Week {
private:
    int _week_num;
public:
    Week(int num) : _week_num{num} {};

    int week_number() { return _week_num; }
};
#endif //CPP1_WEEK_H
