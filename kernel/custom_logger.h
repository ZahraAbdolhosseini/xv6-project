#ifndef CUSTOM_LOGGER_H
#define CUSTOM_LOGGER_H

// سطوح لاگ
#define LOG_LEVEL_INFO    0
#define LOG_LEVEL_WARN    1
#define LOG_LEVEL_ERROR   2

void log_message(int level, const char *message);

#endif