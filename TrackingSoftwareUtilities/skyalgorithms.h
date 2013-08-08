#ifndef _SKYASTRUCT
struct coord
   {
     short sign;  /* carry sign explicitly since -0 not neg. */
     double hh;
     double mm;
     double ss;
   };

struct date_time
   {
	short y;
	short mo;
	short d;
	short h;
	short mn;
	double s;
   };
#define _SKYASTRUCT 1
#endif

#define  PI                3.14159265358979
#define  TWOPI             6.28318530717959
#define  PI_OVER_2         1.57079632679490  /* From Abramowitz & Stegun */   
#define  ARCSEC_IN_RADIAN  206264.8062471
#define  DEG_IN_RADIAN     57.2957795130823
#define  HRS_IN_RADIAN     3.819718634205
#define  KMS_AUDAY         1731.45683633   /* km per sec in 1 AU/day */
#define  SPEED_OF_LIGHT    299792.458      /* in km per sec ... exact. */
#define  SS_MASS           1.00134198     /* solar system mass in sol. units */
#define  J2000             2451545.        /* Julian date at standard epoch */
#define  SEC_IN_DAY        86400.
#define  FLATTEN           0.003352813   /* flattening of earth, 1/298.257 */
#define  EQUAT_RAD         6378137.    /* equatorial radius of earth, meters */
#define  ASTRO_UNIT        1.4959787066e11 /* 1 AU in meters */
#define  RSUN              6.96000e8  /* IAU 1976 recom. solar radius meters */
#define  RMOON             1.738e6    /* IAU 1976 recom. lunar radius meters */
#define  PLANET_TOL        3.          /* flag if nearer than 3 degrees 
						to a major planet ... */
#define  KZEN              0.172       /* zenith extinction, mag, for use
				     in lunar sky brightness calculations. */
#define FIRSTJD            2415387.  /* 1901 Jan 1 -- calendrical limit */
#define LASTJD             2488070.  /* 2099 Dec 31 */


double bab_to_dec(struct coord bab);
void dec_to_bab (double deci,struct coord *bab);
double atan_circ(double x,double y);
double secant_z(double alt);
double true_airmass(double secz); 
double date_to_jd(struct date_time date);
void caldat(double jdin, struct date_time *date, short *dow);
double lst(double jd, double longit);
void lpmoon(double jd,double lat,double sid,
	    double *ra,double *dec,double *dist);  
void lpsun(double jd,double *ra,double *dec);
int day_of_week(double jd);
