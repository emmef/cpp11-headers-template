/*
 * __templateTestIncludeFile__
 *
 * Defines unit tests for __templateIncludeFile__.
 *
 * Part of __templateProjectName__
 * __templateProjectDescription__
 * __templateCopyRightNotice__
 * Source __templateProjectSourceRepository__
 * Email  __templateProjectEmailAddress__
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

#ifndef TEST____templateHeaderGuard__
#define TEST____templateHeaderGuard__

#include <cppunit/TestCaller.h>
#include <cppunit/TestFixture.h>
#include <cppunit/TestSuite.h>

/*
 * Do NOT include <__templateIncludeFile__> here as it will
 * slow down the build process considerably.
 * The file
 *   __templateClass__.__sourceExtension__
 * that implements this test fixture will include the header.
 */
using namespace CppUnit;

class __templateTestClass__ : public TestFixture
{
public:
	void doesCompile(); // tests if the header compiles by its sole existence

	static TestSuite *createSuite()
	{
		CppUnit::TestSuite *suite = new CppUnit::TestSuite("Test suite for '__templateIncludeFile__'");

		suite->addTest(
				new TestCaller<__templateTestClass__>("__templateTestClass__ test 'doesCompile'",
						&__templateTestClass__::doesCompile));

		return suite;
	}

	void setUp();
	void tearDown();
	virtual ~__templateTestClass__();
};

#endif /* TEST____templateHeaderGuard__ */
