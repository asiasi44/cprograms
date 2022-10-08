//
//  firstprojectApp.swift
//  Shared
//
//  Created by Asim Poudel on 11/05/2022.
//

import SwiftUI

@main
struct firstprojectApp: App {
    var body: some Scene {
        DocumentGroup(newDocument: firstprojectDocument()) { file in
            ContentView(document: file.$document)
        }
    }
}
