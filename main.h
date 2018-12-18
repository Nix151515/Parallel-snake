#ifndef __MAIN_H__
#define __MAIN_H__

struct coord
{
	int line;
	int col;
};

struct snake
{
	struct coord head;
	int encoding;
	char direction;
	
	struct coord future_head;
	struct coord tail;
	struct coord future_tail;
	struct coord prev_tail;
	int collided_into;
	int collided;
};

void print_world(char *file_name, int num_snakes, struct snake *snakes,
	int num_lines, int num_cols, int **world);
	
void print_world2(int num_snakes, struct snake *snakes,
	int num_lines, int num_cols, int **world);

void read_data(char *file_name, int *num_snakes, struct snake **snakes,
	int *num_lines, int *num_cols, int ***world);

void run_simulation(int num_lines, int num_cols, int **world, int num_snakes,
	struct snake *snakes, int step_count, char *file_name);

#endif