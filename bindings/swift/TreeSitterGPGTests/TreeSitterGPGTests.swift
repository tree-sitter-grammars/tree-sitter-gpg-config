import XCTest
import SwiftTreeSitter
import TreeSitterGPG

final class TreeSitterGPGTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gpg())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading GPG config grammar")
    }
}
