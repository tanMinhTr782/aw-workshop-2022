import unittest
from TestUtils import TestLexer


class LexerSuite(unittest.TestCase):

    def test_lowercase_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("abc", "abc,<EOF>", 101))
    def test_higherCase_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("Abc1111", "Abc1111,<EOF>", 102))
    def test_underscore_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("_Abc1111", "_Abc1111,<EOF>", 103))
    def test_number_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("1abc", "Error Token 1", 104))
    def test_space_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("a bc", "a,bc,<EOF>", 105))
    def test_two_unders_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("__", "__,<EOF>", 106))
    def test_number_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("69", "Error Token 6", 107))
   def test_number_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("1_234_567", "1234567,<EOF>", 108))
    def test_number2_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("1_72", "172,<EOF>", 109))
    def test_number3_identifier(self):
        """test identifiers"""
        self.assertTrue(TestLexer.test("172", "172,<EOF>", 110))
    

