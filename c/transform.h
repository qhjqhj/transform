#ifndef TRANSFORM_HEADER
#define TRANSFORM_HEADER

void bd2wgs(double bdlat, double bdlng, double *wgsLat, double *wgsLng);
void bd2wgs_exact(double bdlat, double bdlng, double *wgsLat, double *wgsLng);
void bd2gcj(double bdlat, double bdlng, double* gcjLat, double* gcjLng);
void wgs2gcj(double wgsLat, double wgsLng, double *gcjLat, double *gcjLng);
void gcj2wgs(double gcjLat, double gcjLng, double *wgsLat, double *wgsLng);
void gcj2wgs_exact(double gcjLat, double gcjLng, double *wgsLat, double *wgsLng);
double distance(double latA, double lngA, double latB, double lngB);

#endif
