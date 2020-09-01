# include <iostream>

using namespace std;

class Log {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private :
	int m_LogLevel = LogLevelInfo;
public :
	void SetLevel(int level) {
		m_LogLevel = level;
	}
	void Warn(const char * message) {
		if (m_LogLevel== LogLevelWarning)
		{
			cout << "[WARNING]" << message << endl;
		}
	}
};

int main() {
		
}