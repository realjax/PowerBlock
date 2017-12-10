/*
 * ConfigurationMock.cpp
 *
 *  Created on: 24.03.2016
 *      Author: florian
 */

#include "ConfigurationMock.h"
#include "CppUTestExt/MockSupport.h"

ConfigurationMock::ConfigurationMock()
{
}

ConfigurationMock::~ConfigurationMock()
{
}

void ConfigurationMock::initialize()
{
    mock("Configuration").actualCall("initialize");
}

void ConfigurationMock::deinitialize()
{
    mock("Configuration").actualCall("deinitialize");
}

void ConfigurationMock::readConfiguration()
{
    mock("Configuration").actualCall("readConfiguration");
}

IConfiguration::GamepadType ConfigurationMock::getGamepadType() const
{
    mock("Configuration").actualCall("getGamepadType");
    return static_cast<IConfiguration::GamepadType>(mock("Configuration").unsignedIntReturnValue());
}
