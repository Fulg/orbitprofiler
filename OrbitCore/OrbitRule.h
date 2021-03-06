//-----------------------------------
// Copyright Pierric Gimmig 2013-2017
//-----------------------------------
#pragma once

#include <vector>
#include <memory>

class Function;
class Variable;
namespace Orbit{ class Plugin; }

class Rule
{
public:
    Function*       m_Function;
    bool            m_TrackArguments;
    bool            m_TrackReturnValue;
    std::vector<std::shared_ptr<Variable>> m_TrackedVariables;
};

class OrbitRule
{
    std::wstring m_FunctionName;
    std::vector<std::wstring> m_Variables;
    
    bool m_TrackArguments;
    bool m_TrackReturnValue;
};