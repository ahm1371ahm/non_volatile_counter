#pragma once

#include <cstdint>
#include <string>
#include <fstream>

#define DEFAULT_NV_COUNTER_FILE_NAME "./counter.txt"

class NVCounter
{
public:
    explicit NVCounter();
    explicit NVCounter(const int64_t initValue);
    explicit NVCounter(const std::string &fileName);
    explicit NVCounter(const std::string &fileName, const int64_t initValue);

    int64_t operator++();
    int64_t operator++(int);
    int64_t operator--();
    int64_t operator--(int);

    int64_t operator+=(const int64_t arg);
    int16_t operator-=(const int64_t arg);

    void setValue(const int64_t value) { this->m_value = value; }
    int64_t getValue() const { return this->m_value; }
    int64_t &getValue() { return this->m_value; }

    const std::string &getFilePath() const { return this->m_fileName; }

private:
    int64_t m_value;
    std::string m_fileName;
    void _writeToFile() const;
    void _readFromFile(); 
};
