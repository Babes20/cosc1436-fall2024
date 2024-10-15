#
string ReadString(string message, bool isRequired)
{
    string input;
    do
    {
        cout << message;
        getline(cin, input);

        if (isRequired && input == "")
            cout << "ERROR: Value is required" << endl;
    } while (isRequired && input == "");

    return input;
}
    /// @brief Reads a string from input
   /// @param message Message to display 
  ///@param isRequired True if the value is required
  /// @return Input from user