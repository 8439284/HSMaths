//
// Created by clsda on 2024/10/31.
//

#ifndef HSMATHS_STATISTICS_H
#define HSMATHS_STATISTICS_H
//#include <iterator>
//#include <vector>
//#include <cmath>
//#include <clsdautil/ArrayU.h>
#include <vector>
//#include "Variance.h"

//#include "SolidGeo.h"
//
//class SolidGeo;
class Statistics {
public:
//    static double aver(double nums[]) {
////        ArrayU::arrayLength(nums);
//        int length = ArrayU::arrayLength(nums);
//        double sum = 0;
//        for (int i = 0; i < length; i++) {
//            sum += nums[i];
//        }
//        return sum / length;
//    }
//    static SolidGeo b() {return SolidGeo();};
//    SolidGeo();
    static double average(std::vector<double> nums) {
        int length = nums.size();
        double sum = 0;
        for (int i = 0; i < length; i++) {
            sum += nums[i];
        }
        return sum / length;
    }

    static double average(std::vector<double> nums, std::vector<double> weights) {
        int length = nums.size();
        double sum = 0;
        double weightsum = 0;
        for (int i = 0; i < length; i++) {
            sum += nums[i] * weights[i];
            weightsum += weights[i];
        }
        return sum / weightsum;
    }

//分层抽样方差
    static double varss(std::vector<double> averages, std::vector<double> variances, std::vector<double> weights) {
        int length = averages.size();
        double sum = 0;
        double weighedsum = 0;
        double weightedaverage = average(averages, weights);
        for (int i = 0; i < length; i++) {
            sum +=  (power((averages[i] - weightedaverage), 2) + variances[i]) * weights[i];
            weighedsum += weights[i];
        }
        return sum / weighedsum;
    //            int size = nums.size() / 3 ;
    //            int total_weight = 0;
    //            for (int i = 0; i < size; i++) {
    //                int aver =  nums[i];
    //
    //            }
    //            for (int i = 0; i < size; i++) {
    //                int weight = nums[i + 2];
    //                total_weight += weight;
    //            }
    //            for (int i = 0; i < size; i++) {
    //                int aver =  nums[i];
    //                int var =  nums[i + 1];
    //                int weight = nums[i + 2];
    //            }
    //            for
    }

    static double power(double base, int power) {
        double sum = 1;
        for (int i = 0; i < power; i++) {
            sum *= base;
        }
        return sum;
    }

    static double power(double base) {
        return power(base, 2);
    }

//    static double weightedvariance(std::vector<double> averages, std::vector<double> variances, std::vector<double> weights) {
//        double sum = 0;
//        double weighedsum = 0;
//        for (int i = 0; i < averages.size(); i++) {
//            sum +=  (pow((averages[i] - weightedaverage), 2) + variances[i]) * weights[i];
//            weighedsum += weights[i];
//}
};


#endif //HSMATHS_STATISTICS_H
