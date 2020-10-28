//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_REPORT_H
#define PROJECT_REPORT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Report{
private:
    vector<string*> reportLines;
public:
    vector<string*> getReportLines();
};

#endif //PROJECT_REPORT_H
