
class RandomNumberGenerator {
public:
    int getRandomNumber(int min, int max) {
        // Use a random number generator to get a random number between min and max
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(min, max);
        return dis(gen);
    }
};