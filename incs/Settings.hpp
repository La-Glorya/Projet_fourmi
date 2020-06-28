#ifndef SETTINGS_HPP
#define SETTINGS_HPP

/* ---- Paramètres généraux ---- */

static int WINDOW_WIDTH;
static int WINDOW_HEIGHT;

#define SQUARE_SIZE 6 // Une case fait 5x5 pixels

#define GRID_WIDTH WINDOW_WIDTH / SQUARE_SIZE
#define GRID_HEIGHT WINDOW_HEIGHT / SQUARE_SIZE

#define ANTHILL_X GRID_WIDTH / 2
#define ANTHILL_Y GRID_HEIGHT / 2

static int START_ANTS; // Nombre de fourmis dans la colonie au lancement de la simulation

#define COLONY_PROTECTION_RANGE 20 // Nombre de cases autour de la colonie où il n'y aura aucun obstacle

static int PHEROMONE_POWER; // Nombre de frames qu'un pheromone reste actif


/* ---- Probabilités ---- */

#define OBSTACLE_SPAWN_PROBABILITY 0.004f
#define OBSTACLE_ZONE_STEP 0.1f

#define FOOD_SPAWN_PROBABILITY 0.003f
#define FOOD_ZONE_STEP 0.15f
#define FOOD_EXPAND_PROBABILITY 20.0f
#define EXPLORE_PROBABILITY 500


/* ---- Couleurs ---- */

#define OBSTACLE_COLOR 0xFF0000FF
#define FOOD_COLOR 0x00FF00FF
#define ANT_COLOR_FOLLOW 0xFFFFFFFF
#define ANT_COLOR_RETURN 0xFFA000FF
#define ANTHILL_COLOR 0xFFFF00FF
#define FOURM2_COLOR 0xFBCF0FF
#define FOURM3_COLOR 0xD473D4


#endif
