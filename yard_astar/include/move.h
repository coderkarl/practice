#ifndef MOVE_H
#define MOVE_H

float arc_move(float next_pos[], float x1, float y1, int th1, int motion, float d, float rev_weight, float diag_weight);

void simp_move(float next_pos[], float x1,float y1,int motion,float d);

#endif
