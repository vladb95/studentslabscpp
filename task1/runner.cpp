/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_Task1Tests_init = false;
#include "/home/vladb95/projects/studentslabscpp/task1/task1tests.h"

static Task1Tests suite_Task1Tests;

static CxxTest::List Tests_Task1Tests = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Task1Tests( "task1tests.h", 4, "Task1Tests", suite_Task1Tests, Tests_Task1Tests );

static class TestDescription_suite_Task1Tests_testArea : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Task1Tests_testArea() : CxxTest::RealTestDescription( Tests_Task1Tests, suiteDescription_Task1Tests, 7, "testArea" ) {}
 void runTest() { suite_Task1Tests.testArea(); }
} testDescription_suite_Task1Tests_testArea;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
