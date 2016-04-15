#include <stdio.h>
#include <math.h>

double nsec_to_sec (double TIME) {
	TIME = TIME / pow(10,-9);
	return TIME;
}

double nsec_to_mksec (double TIME) {
	TIME = TIME / pow(10,3);
	return TIME;
}

double nsec_to_msec (double TIME) {
	TIME = TIME / pow(10,6);
	return TIME;
}

double nsec_to_min (double TIME) {
	TIME = (TIME / pow(10,-9)) * 60;
	return TIME;
}

double nsec_to_chac (double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600;
	return TIME;
}

double nsec_to_sut (double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600 * 24;
	return TIME;
}

double nsec_to_week (double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600 * 24 * 7;
	return TIME;
}

double nsec_to_year (double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600 * 24 * 7 * 52;
	return TIME;
}

double nsec_to_vek (double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600 * 24 * 7 * 52 * 100;
	return TIME;
}

double mksec_to_sec (double TIME) {
	TIME = TIME / pow(10, 6);
	return TIME;
}

double mksec_to_msec (double TIME) {
	TIME = TIME / pow(10,3);
	return TIME;
}

double mksec_to_min (double TIME) {
	TIME = (TIME / pow(10,6)) * 60;
	return TIME;
}

double mksec_to_chas (double TIME) {
	TIME = (TIME / pow(10,6)) * 3600;
	return TIME;
}

double mksec_to_sut (double TIME) {
	TIME = (TIME / pow(10,6)) * 3600 * 24;
	return TIME;
}

double mksec_to_weak (double TIME) {
	TIME = (TIME / pow(10,6)) * 3600 * 24 * 7;
	return TIME;
}

double mksec_to_year (double TIME) {
	TIME = (TIME / pow(10,6)) * 3600 * 24 * 7 * 52;
	return TIME;
}

double mksec_to_vek (double TIME) {
	TIME = (TIME / pow(10,6)) * 3600 * 24 * 7 * 52 * 100;
	return TIME;
}

double mksec_to_nsec (double TIME) {
	TIME = TIME * pow(10,3);
	return TIME;
}

double msec_to_sec (double TIME) {
	TIME = TIME * pow(10,-3);
	return TIME;
}

double msec_to_mksec (double TIME) {
	TIME = TIME * pow(10, 3);
	return TIME;
}

double msec_to_nsec (double TIME) {
	TIME = TIME * pow(10, 6);
	return TIME;
}

double msec_to_min (double TIME) {
	TIME = TIME * pow(10, -3) * 60;
	return TIME;
}

double msec_to_chas (double TIME) {
	TIME = TIME * pow(10, -3) * 3600;
	return TIME;
}

double msec_to_sut (double TIME) {
	TIME = TIME * pow(10, -3) * 3600 * 24;
	return TIME;
}

double msec_to_weak (double TIME) {
	TIME = TIME * pow(10, -3) * 3600 * 24 * 7;
	return TIME;
}

double msec_to_year (double TIME) {
	TIME = TIME * pow(10, -3) * 3600 * 24 * 7 * 52;
	return TIME;
}

double msec_to_vek (double TIME) {
	TIME = TIME * pow(10, -3) * 3600 * 24 * 7 * 52;
	return TIME;
}

double sec_to_nsec (double TIME) {
	TIME = TIME * pow(10, -9);
	return TIME;
}

double sec_to_mksec (double TIME) {
	TIME = TIME * pow(10, -6);
	return TIME;
}

double sec_to_msec (double TIME) {
	TIME = TIME * pow(10, -3);
	return TIME;
}

double sec_to_min (double TIME) {
	TIME = TIME * (1 / 60);
	return TIME;
}

double sec_to_chas (double TIME) {
	TIME = TIME * (1 / 3600);
	return TIME;
}

double sec_to_sut (double TIME) {
	TIME = TIME * (1 / (3600 * 24));
	return TIME;
}

double sec_to_weak (double TIME) {
	TIME = TIME * (1 / (3600 * 24 * 7));
	return TIME;
}

double sec_to_year (double TIME) {
	TIME = TIME * (1 / (3600 * 24 * 7 * 52));
	return TIME;
}

double sec_to_vek (double TIME) {
	TIME = TIME * (1 / (3600 * 24 * 7 * 52 * 100));
	return TIME;
}

double min_to_nsek (double TIME) {
	TIME = TIME * 60 * 1000 * 1000 * 1000;
	return TIME;
}

double min_to_mksek (double TIME) {
	TIME = TIME * 60 * 1000 * 1000;
	return TIME;
}

double min_to_msek (double TIME) {
	TIME = TIME * 60 * 1000;
	return TIME;
}

double min_to_sec (double TIME) {
	TIME = TIME * 60;
	return TIME;
}

double min_to_chas (double TIME) {
	TIME = TIME / 60;
	return TIME;
}

double min_to_sut (double TIME) {
	TIME = TIME / (60 * 24);
	return TIME;
}

double min_to_week (double TIME) {
	TIME = TIME / (60 * 24 * 7);
	return TIME;
}

double min_to_year (double TIME) {
	TIME = TIME / (60 * 24 * 7 * 52);
	return TIME;
}

double min_to_vek (double TIME) {
	TIME = TIME / (60 * 24 * 7 * 52 * 100);
	return TIME;
}

double chas_to_nsec (double TIME) {
	TIME = TIME * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

double chas_to_mksec (double TIME) {
	TIME = TIME * 3600 * 1000 * 1000;
	return TIME;
}

double chas_to_msek (double TIME) {
	TIME = TIME * 3600 * 1000;
	return TIME;
}

double chas_to_sec (double TIME) {
	TIME = TIME * 3600;
	return TIME;
}

double chas_to_min (double TIME) {
	TIME = TIME * 60;
	return TIME;
}

double chas_to_sut (double TIME) {
	TIME = TIME / 24;
	return TIME;
}

double chas_to_week (double TIME) {
	TIME = TIME / (24 * 7);
	return TIME;
}

double chas_to_year (double TIME) {
	TIME = TIME / (24 * 7);
	return TIME;
}

double chas_to_vek (double TIME) {
	TIME = TIME / (24 * 7);
	return TIME;
}

double sut_to_nsek (double TIME) {
	TIME = TIME * 24 * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

double sut_to_mksek (double TIME) {
	TIME = TIME * 24 * 3600 * 1000 * 1000;
	return TIME;
}

double sut_to_msek (double TIME) {
	TIME = TIME * 24 * 3600 * 1000;
	return TIME;
}

double sut_to_sek (double TIME) {
	TIME = TIME * 24 * 3600;
	return TIME;
}

double sut_to_min (double TIME) {
	TIME = TIME * 24 * 60;
	return TIME;
}

double sut_to_chas (double TIME) {
	TIME = TIME * 24;
	return TIME;
}

double sut_to_week (double TIME) {
	TIME = TIME / 7;
	return TIME;
}

double sut_to_year (double TIME) {
	TIME = TIME / 365;
	return TIME;
}

double sut_to_vek (double TIME) {
	TIME = TIME / (365 * 100);
	return TIME;
}

double week_to_nsek (double TIME) {
	TIME = TIME * 7 * 24 * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

double week_to_mksek (double TIME) {
	TIME = TIME * 7 * 24 * 3600 * 1000 * 1000;
	return TIME;
}

double week_to_msek (double TIME) {
	TIME = TIME * 7 * 24 * 3600 * 1000;
	return TIME;
}

double week_to_sek (double TIME) {
	TIME = TIME * 7 * 24 * 3600;
	return TIME;
}

double week_to_min (double TIME) {
	TIME = TIME * 7 * 24 * 60;
	return TIME;
}

double week_to_chas (double TIME) {
	TIME = TIME * 7 * 24;
	return TIME;
}

double week_to_sut (double TIME) {
	TIME = TIME * 7;
	return TIME;
}

double week_to_year (double TIME) {
	TIME = TIME / 52;
	return TIME;
}

double week_to_vek (double TIME) {
	TIME = TIME / (52 * 100);
	return TIME;
}

double year_to_nsek (double TIME) {
	TIME = TIME * 365 * 24 * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

double year_to_mksek (double TIME) {
	TIME = TIME * 365 * 24 * 3600 * 1000 * 1000;
	return TIME;
}

double year_to_msek (double TIME) {
	TIME = TIME * 365 * 24 * 3600 * 1000;
	return TIME;
}

double year_to_sek (double TIME) {
	TIME = TIME * 365 * 24 * 3600;
	return TIME;
}

double year_to_min (double TIME) {
	TIME = TIME * 365 * 24 * 60;
	return TIME;
}

double year_to_chas (double TIME) {
	TIME = TIME * 365 * 24;
	return TIME;
}

double year_to_sut (double TIME) {
	TIME = TIME * 365;
	return TIME;
}

double year_to_week (double TIME) {
	TIME = TIME * 52;
	return TIME;
}

double year_to_vek (double TIME) {
	TIME = TIME / 100;
	return TIME;
}

double vek_to_nsek (double TIME) {
	TIME = TIME * 100 * 365 * 24 * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

double vek_to_mksek (double TIME) {
	TIME = TIME * 100 * 365 * 24 * 3600 * 1000 * 1000;
	return TIME;
}

double vek_to_msek (double TIME) {
	TIME = TIME * 100 * 365 * 24 * 3600 * 1000;
	return TIME;
}

double vek_to_sek (double TIME) {
	TIME = TIME * 100 * 365 * 24 * 3600;
	return TIME;
}

double vek_to_min (double TIME) {
	TIME = TIME * 100 * 365 * 24 * 60;
	return TIME;
}

double vek_to_chas (double TIME) {
	TIME = TIME * 100 * 365 * 24;
	return TIME;
}

double vek_to_sut (double TIME) {
	TIME = TIME * 100 * 365;
	return TIME;
}

double vek_to_weak (double TIME) {
	TIME = TIME * 100 * 52;
	return TIME;
}

double vek_to_year (double TIME) {
	TIME = TIME * 100;
	return TIME;
}

