//
// Created by sajith on 2/19/21.
//

#ifndef KALMAN_FILTER_COST_H
#define KALMAN_FILTER_COST_H

double goal_distance_cost(int goal_lane, int intended_lane, int final_lane,
                          double distance_to_goal);


#endif //KALMAN_FILTER_COST_H
