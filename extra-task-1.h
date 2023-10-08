#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cmath>
#include <cassert>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::array;
using std::string;
using std::getline;

double seconds_difference(double time_1, double time_2);

double hours_difference(double time_1, double time_2);

double to_float_hours(int hours, int minutes, int seconds);

double to_24_hour_clock(double hours);

double time_to_utc(int utc_offset, double time);

double time_from_utc(int utc_offset, double time);
