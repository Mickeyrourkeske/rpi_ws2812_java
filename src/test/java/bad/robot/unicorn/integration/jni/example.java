/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package bad.robot.unicorn.integration.jni;

class example {
	static void My_variable_set(double value) {
		exampleJNI.My_variable_set(value);
	}

	static double My_variable_get() {
		return exampleJNI.My_variable_get();
	}

	static int fact(int n) {
		return exampleJNI.fact(n);
	}

	static int my_mod(int x, int y) {
		return exampleJNI.my_mod(x, y);
	}

	static String get_time() {
		return exampleJNI.get_time();
	}

}
