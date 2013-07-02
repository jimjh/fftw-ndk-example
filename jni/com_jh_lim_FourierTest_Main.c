#include <fftw3.h>
#include "com_jh_lim_FourierTest_Main.h"

JNIEXPORT jint JNICALL Java_com_jh_1lim_FourierTest_Main_testFourier (JNIEnv * env, jobject thiz) {
//void Java_com_jh_lim_FourierTest_Main_testFourier (JNIEnv * env, jclass class) {
  
	unsigned int N = 20;
	fftw_complex *in, *out;
	fftw_plan p;
	in = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);
	out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);
	p = fftw_plan_dft_1d(N, in, out, FFTW_FORWARD, FFTW_ESTIMATE);
	fftw_execute(p); /* repeat as needed */
	fftw_destroy_plan(p);
	fftw_free(in); fftw_free(out);

}
