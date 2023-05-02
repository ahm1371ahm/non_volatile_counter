#pragma once

#include <cstdint>
#include <string>
#include <fstream>
#include <filesystem>
#include <iostream>

#define DEFAULT_NV_COUNTER_FILE_NAME "./counter.txt"

class NVCounter
{
public:
    explicit NVCounter(); // uses default file name
    explicit NVCounter(const std::string &fileName);

    void setValue(const int64_t value) { this->m_value = value; }
    int64_t getValue() const { return this->m_value; }
    int64_t &getValue() { return this->m_value; }
    int64_t operator*() const {return this->m_value;}
    int64_t &operator*() {return this->m_value;}
    void reset();

    int64_t operator++();
    int64_t operator++(int);
    int64_t operator--();
    int64_t operator--(int);

    int64_t operator+=(const int64_t arg);
    int16_t operator-=(const int64_t arg);

    const std::string &getFilePath() const { return this->m_fileName; }
private:
    int64_t m_value;
    std::string m_fileName;
    void _writeToFile() const;
    void _readFromFile(); 
    bool _fileExists() const;
};
