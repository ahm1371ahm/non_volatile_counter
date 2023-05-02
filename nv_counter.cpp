#include "nv_counter.hpp"

NVCounter::NVCounter() : m_value(0), m_fileName(DEFAULT_NV_COUNTER_FILE_NAME)
{
    if (this->_fileExists())
        this->_readFromFile();
    else
        this->_writeToFile();
}

NVCounter::NVCounter(const std::string &fileName) : m_value(0), m_fileName(fileName)
{
    if (this->_fileExists())
        this->_readFromFile();
    else
        this->_writeToFile();
}

void NVCounter::reset()
{
    this->m_value = 0;
    this->_writeToFile();
}

int64_t NVCounter::operator++()
{
    ++this->m_value;
    this->_writeToFile();
    return this->m_value;
}

int64_t NVCounter::operator++(int)
{
    this->m_value++;
    this->_writeToFile();
    return this->m_value - 1;
}
int64_t NVCounter::operator--()
{
    --this->m_value;
    this->_writeToFile();
    return this->m_value;
}
int64_t NVCounter::operator--(int)
{
    --this->m_value;
    this->_writeToFile();
    return this->m_value + 1;
}

int64_t NVCounter::operator+=(const int64_t arg)
{
    this->m_value += arg;
    this->_writeToFile();
    return this->m_value;
}
int16_t NVCounter::operator-=(const int64_t arg)
{
    this->m_value -= arg;
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

bool NVCounter::_fileExists() const
{
    return std::filesystem::exists(this->m_fileName);
}

std::ostream &operator<<(std::ostream &out, const NVCounter &arg)
{
    out << arg.m_value;
    return out;
}