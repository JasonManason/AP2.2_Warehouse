class IContainer {

    public:
        virtual ~IContainer() = default;

        virtual bool isEmpty() {
            return true; // Default
        }

        virtual bool isFull() {
            return false; // Default
        }
};