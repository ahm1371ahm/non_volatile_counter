#include "nv_counter.hpp"

NVCounter::NVCounter() : m_value(0), m_filePath(DEFAUL_NV_COUNTER_FILE_PATH)
{
}
NVCounter::NVCounter(const int64_t initValue) : m_value(initValue), m_filePath(DEFAUL_NV_COUNTER_FILE_PATH)
{
}
NVCounter::NVCounter(const std::string &filePath) : m_value(0), m_filePath(filePath)
{
}
NVCounter::NVCounter(const std::string &filePath, const int64_t initValue) : m_value(initValue), m_filePath(filePath)
{
}