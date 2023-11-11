#include <iostream>
#include "../src/data_structures/CSuffixTree.cpp"
#include "../src/data_structures/CSuffixNode.cpp"


#include <cassert>
#include <iostream>
#include <vector>
#include <string>
#include <exception>

// Function to convert a vector of indices to a string for easy comparison and output
std::string vec_to_string(const std::vector<int>& vec) {
    std::string s = "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        s += std::to_string(vec[i]);
        if (i < vec.size() - 1) s += ", ";
    }
    s += "]";
    return s;
}

/**
 * Test function to check the correctness of SuffixTree operations
 */
void test_suffix_tree() {
    // Test case 1: Inserting and searching for a suffix that is present
    CSuffixTree tree;
    std::string test_string = "bazinga";
    tree.buildTree(test_string);
    std::string query1 = "inga";
    auto results1 = tree.search(query1);
    assert(!results1.empty() && "Test 1 Failed: Suffix 'inga' should be found.");
    std::cout << "Test 1 Passed: Found suffix 'inga' at positions " << vec_to_string(results1) << std::endl;

    // Test case 2: Searching for a suffix that is not present
    std::string query2 = "banana";
    auto results2 = tree.search(query2);
    assert(results2.empty() && "Test 2 Failed: Suffix 'banana' should not be found.");
    std::cout << "Test 2 Passed: Suffix 'banana' was not found as expected." << std::endl;

    // Test case 3: Searching for a suffix that is also a prefix
    std::string query3 = "baz";
    auto results3 = tree.search(query3);
    assert(!results3.empty() && "Test 3 Failed: Suffix 'baz' should be found.");
    std::cout << "Test 3 Passed: Found suffix 'baz' at positions " << vec_to_string(results3) << std::endl;

    // Test case 4: Searching for each individual letter to check single character suffixes
    for (char c : test_string) {
        std::string query(1, c);
        auto results = tree.search(query);
        assert(!results.empty() && "Test 4 Failed: Single character suffix should be found.");
        std::cout << "Test 4 Passed: Found suffix '" << c << "' at positions " << vec_to_string(results) << std::endl;
    }

    // Test case 5: Searching for the entire string
    auto results5 = tree.search(test_string);
    assert(!results5.empty() && "Test 5 Failed: The entire string should be found as a suffix.");
    std::cout << "Test 5 Passed: Found the entire string 'bazinga' at positions " << vec_to_string(results5) << std::endl;

}

int main() {
    try {
        test_suffix_tree();
        std::cout << "All tests passed successfully." << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "A test failed: " << e.what() << std::endl;
    }
    return 0;
}
