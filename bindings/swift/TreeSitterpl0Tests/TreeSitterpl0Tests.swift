import XCTest
import SwiftTreeSitter
import TreeSitterpl0

final class TreeSitterpl0Tests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_pl0())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading pl0 grammar")
    }
}
