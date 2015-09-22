/*
 * Main.__sourceExtension__
 *
 * Exists to make linking of sanity checks succeed. It can also 
 * be used to actually perform sanity checks on the headers
 * provided in this project.
 *
 * Part of __projectName__
 * __description__
 * Copyright (C) __copyRightYear__ __copyRightHolder__.
 * Source __sourceRepository__
 * Email  __emailAddress__
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// __AUTO_ADD_TEST_INCLUDES_HERE__

#include <iostream>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TextTestRunner.h>

using namespace CppUnit;
using namespace std;

int main ()
{
	CppUnit::TextTestRunner runner;

	// __AUTO_ADD_SUITE_HERE__

	cout << "Starting tests!" << endl;

	return runner.run() ? 0 : 1;
}
