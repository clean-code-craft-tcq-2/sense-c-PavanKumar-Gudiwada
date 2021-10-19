
#define MAX(a, b)  ( ((a) > (b)) ? (a) : (b) )
#define MIN(a, b)  ( ((a) < (b)) ? (a) : (b) )

typedef struct
{
  float average;
  float min;
  float max;
}Stats;

struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
