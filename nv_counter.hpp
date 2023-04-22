#pragma once

#include <cstdint>
#include <string>

#define DEFAUL_NV_COUNTER_FILE_PATH "./"

class NVCounter
{
public:
    explicit NVCounter();
    explicit NVCounter(const int64_t initValue);
    explicit NVCounter(const std::string &filePath);
    explicit NVCounter(const std::string &filePath, const int64_t initValue);

    int64_t operator++();
    int64_t operator++(int);
    int64_t operator--();
    int64_t operator--(int);

    int64_t operator+=(const int64_t arg);
    int16_t operator-=(const int64_t arg);

    void setValue(const int64_t value) { this->m_value = value; }
    int64_t getValue() const { return this->m_value; }
    int64_t &getValue() { return this->m_value; }

    const std::string &getFilePath() const { return this->m_filePath; }

private:
    int64_t m_value;
    std::string m_filePath;
};
