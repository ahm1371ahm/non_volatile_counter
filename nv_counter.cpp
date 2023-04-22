#include "nv_counter.hpp"

NVCounter::NVCounter() : m_value(0), m_fileName(DEFAULT_NV_COUNTER_FILE_NAME)
{
    this->_writeToFile();
}

NVCounter::NVCounter(const std::string &fileName) : m_value(0), m_fileName(fileName)
{
    this->_writeToFile();
}
NVCounter::NVCounter(const std::string &filePath, const int64_t initValue) : m_value(initValue), m_fileName(filePath)
{
    this->_writeToFile();
}

int64_t NVCounter::operator++()
{
    ++this->m_value;
    this->_writeToFile();
    return this->m_value;
}

void NVCounter::_writeToFile() const
{
    std::ofstream file(this->m_fileName);
    file << this->m_value;
    file.close();
}

void NVCounter::_readFromFile()
{
    std::ifstream file(this->m_fileName);
    file >> this->m_value;
    file.close();
}