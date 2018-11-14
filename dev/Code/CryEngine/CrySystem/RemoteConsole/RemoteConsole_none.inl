/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/


/////////////////////////////////////////////////////////////////////////////////////////////
CRemoteConsole::CRemoteConsole()
    : m_listener(1)
    , m_lastPortValue(0)
    , m_running(false)
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
CRemoteConsole::~CRemoteConsole()
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::RegisterConsoleVariables()
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::UnregisterConsoleVariables()
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::Start()
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::Stop()
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::AddLogMessage(const char* log)
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::AddLogWarning(const char* log)
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::AddLogError(const char* log)
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::Update()
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::RegisterListener(IRemoteConsoleListener* pListener, const char* name)
{
}

/////////////////////////////////////////////////////////////////////////////////////////////
void CRemoteConsole::UnregisterListener(IRemoteConsoleListener* pListener)
{
}