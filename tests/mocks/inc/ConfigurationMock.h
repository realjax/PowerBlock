/*
 * ConfigurationMock.h
 *
 *  Created on: 24.03.2016
 *      Author: florian
 */

#ifndef MOCKS_CONFIGURATIONMOCK_H_
#define MOCKS_CONFIGURATIONMOCK_H_

#include "IConfiguration.h"

class ConfigurationMock : public IConfiguration
{
public:
    ConfigurationMock();

    virtual ~ConfigurationMock();

    virtual void initialize();

    virtual void deinitialize();

    virtual void readConfiguration();

    virtual IConfiguration::GamepadType getGamepadType() const;
};

#endif /* MOCKS_CONFIGURATIONMOCK_H_ */
