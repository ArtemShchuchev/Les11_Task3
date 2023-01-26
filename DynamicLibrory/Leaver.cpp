#include "Leaver.h"

std::wstring Leaver::leave(std::wstring& s)
{
    return (LEAVE_STR + s + L"!");
}
