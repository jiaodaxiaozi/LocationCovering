#ifndef CFL_HEADER
#define CFL_HEADER


#include "global_variables.h"
#include "global_functions.h"

using namespace std;

/*****************************************************************/
int position_y_CFL(instance *inst,int location);
/*****************************************************************/

/*****************************************************************/
int position_z_CFL(instance *inst,int client);
/*****************************************************************/

/*****************************************************************/
void build_model_CFL(instance *inst);
/*****************************************************************/

/*****************************************************************/
void solve_model_CFL(instance *inst);
/*****************************************************************/

/*****************************************************************/
void clean_model_CFL(instance *inst);
/*****************************************************************/


#endif
