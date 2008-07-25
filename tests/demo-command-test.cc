// This file is part of the iRobot Create library.
//
// libirobot-create is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// libirobot-create is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with libirobot-create.  If not, see <http://www.gnu.org/licenses/>.

#include "common.hh"

int run_test (iRobot::Create& robot, std::stringstream&)
{
  robot.sendDemoCommand (iRobot::Create::DEMO_COVER);
  robot.sendDemoCommand (iRobot::Create::DEMO_ABORT);

  CHECK_FAILURE
    (iRobot::InvalidArgument,
     robot.sendDemoCommand (static_cast<iRobot::Create::Demo> (42)));

  return TEST_SUCCEED;
}

GENERATE_TEST ()